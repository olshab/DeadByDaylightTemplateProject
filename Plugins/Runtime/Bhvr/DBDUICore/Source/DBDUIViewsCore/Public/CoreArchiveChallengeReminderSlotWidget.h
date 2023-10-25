#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "EPlayerRole.h"
#include "ArchiveChallengeReminderViewData.h"
#include "CoreArchiveChallengeReminderSlotWidget.generated.h"

class UCoreArchiveQuestNodeWidget;
class UDBDImage;
class UCoreOnHoverBorderWidget;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveChallengeReminderSlotWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCoreArchiveQuestNodeWidget* Node;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDImage* EmptySlotImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDImage* InactiveBG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDImage* ActiveBG;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDImage* SmokeBackground;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDImage* ProgressBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDImage* SelectorHighlight;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDTextBlock* TitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDTextBlock* InactiveTitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UDBDTextBlock* InactiveSubtitleTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(BlueprintReadOnly)
	EPlayerRole _slotRole;

	UPROPERTY(BlueprintReadWrite)
	bool _hasActiveHoverEffect;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisualState(const FArchiveChallengeReminderViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateProgressBar(float progress);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateActiveState(bool isActive, bool playAnimation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SwapChallenge(const FArchiveChallengeReminderViewData& data);

	UFUNCTION()
	void SetSlotSelectorState(bool isSelectorOpen);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetQuestNodeHoverEffect(bool isHovered);

	UFUNCTION(BlueprintCallable)
	void SetData(const FArchiveChallengeReminderViewData& data);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitVisualState();

public:
	UFUNCTION()
	void Init(EPlayerRole role);

	UFUNCTION()
	void ClearData();

public:
	UCoreArchiveChallengeReminderSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveChallengeReminderSlotWidget) { return 0; }
