#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGAtlantaDailyRewardsScreen.generated.h"

class UUMGAtlantaDailyRewardsGrid;
class UCanvasPanel;
class UUMGPopupButton;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaDailyRewardsScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUMGAtlantaDailyRewardsGrid* DailyRewardWidgetsGrid;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UCanvasPanel* ContinueButtonPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUMGPopupButton* ContinueButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* RemainingTimeTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor NormalColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateColor WarningColor;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleCurrentActiveDailyRewardStateChanged(int32 dailyRewardIndex, int32 dailyRewardNewState);

	UFUNCTION(BlueprintCallable)
	void HandleContinueButtonClick();

public:
	UUMGAtlantaDailyRewardsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaDailyRewardsScreen) { return 0; }
