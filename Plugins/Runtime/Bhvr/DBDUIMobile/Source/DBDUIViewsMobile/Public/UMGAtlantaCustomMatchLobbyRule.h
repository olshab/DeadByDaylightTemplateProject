#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaCustomMatchLobbyRule.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaCustomMatchLobbyRule : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* RuleName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UTextBlock* OptionName;

public:
	UUMGAtlantaCustomMatchLobbyRule();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaCustomMatchLobbyRule) { return 0; }
