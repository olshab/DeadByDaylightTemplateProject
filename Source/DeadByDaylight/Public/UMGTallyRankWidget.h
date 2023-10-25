#pragma once

#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "UMGTallyListElementWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "TallyScorePipsData.h"
#include "UMGTallyRankWidget.generated.h"

class UUMGTallyEmblemWidget;
class UHorizontalBox;
class UTextBlock;
class UUMGTallyRankBanner;
class UUMGTallyProgressBar;

UCLASS(EditInlineNew)
class UUMGTallyRankWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FMargin _emblemsPadding;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGTallyEmblemWidget> EmblemWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UHorizontalBox* EmblemsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUMGTallyProgressBar* ProgressBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUMGTallyRankBanner* RankBanner;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* RankProgressLabel;

private:
	UPROPERTY(Transient, Export)
	TArray<UUMGTallyEmblemWidget*> _emblems;

	UPROPERTY(Transient)
	FTallyScorePipsData _scoreData;

public:
	UFUNCTION(BlueprintPure)
	FTallyScorePipsData GetScoreData() const;

	UFUNCTION(BlueprintPure)
	TArray<UUMGTallyEmblemWidget*> GetEmblems() const;

public:
	UUMGTallyRankWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyRankWidget) { return 0; }
