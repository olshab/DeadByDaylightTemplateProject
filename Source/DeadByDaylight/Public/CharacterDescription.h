#pragma once

#include "CoreMinimal.h"
#include "CustomizedMeshPart.h"
#include "DBDTableRowBase.h"
#include "EPlayerRole.h"
#include "ECharacterDifficulty.h"
#include "SlideShowDescription.h"
#include "EKillerAbilities.h"
#include "UObject/SoftObjectPtr.h"
#include "EGender.h"
#include "DataTableProxy.h"
#include "EKillerHeight.h"
#include "CharacterDescription.generated.h"

class UTexture2D;
class APawn;

USTRUCT(BlueprintType)
struct FCharacterDescription: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CharacterCodename;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BackStory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* HudIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BackgroundImagePath;

	UPROPERTY(EditAnywhere)
	TArray<FCustomizedMeshPart> CustomizationDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChapterDlcId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AdditionalDlcIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AvailableIfDlcInstalled;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName DebugName;

	UPROPERTY(EditAnywhere)
	bool IsInChunk0;

	UPROPERTY(EditAnywhere)
	bool IsAvailableInNonViolentBuild;

	UPROPERTY(EditAnywhere)
	bool IsAvailableInAtlantaBuild;

	UPROPERTY(EditAnywhere)
	uint32 PlatformExclusiveFlag;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<APawn> GamePawn;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<APawn> MenuPawn;

	UPROPERTY(EditAnywhere)
	bool IsDefaultItemSpawnableInParadise;

	UPROPERTY(EditAnywhere)
	FName DefaultItem;

	UPROPERTY(EditAnywhere)
	FName DefaultPerk;

	UPROPERTY(EditAnywhere)
	EGender Gender;

	UPROPERTY(EditAnywhere)
	TArray<EKillerAbilities> KillerAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableProxy TunableDB;

	UPROPERTY(EditAnywhere)
	EKillerHeight KillerHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlideShowDescription SlideShowDescriptions;

	UPROPERTY(EditAnywhere)
	bool HideStoreCustomizations;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> CustomizationCategories;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CharacterId;

public:
	DEADBYDAYLIGHT_API FCharacterDescription();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterDescription) { return 0; }
