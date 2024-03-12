#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationRewardViewData.h"
#include "CustomizationRewardOutfitPartsViewData.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UCustomizationRewardOutfitPartsViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FCustomizationRewardViewData> OutfitParts;

public:
	UCustomizationRewardOutfitPartsViewData();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationRewardOutfitPartsViewData) { return 0; }
