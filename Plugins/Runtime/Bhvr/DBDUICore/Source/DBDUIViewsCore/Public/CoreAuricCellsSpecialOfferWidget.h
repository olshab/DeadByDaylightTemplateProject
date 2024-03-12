#pragma once

#include "CoreMinimal.h"
#include "CoreAuricCellsBundleWidget.h"
#include "CoreAuricCellsSpecialOfferWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreAuricCellsSpecialOfferWidget : public UCoreAuricCellsBundleWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* TimeLeftTextBlock;

public:
	UCoreAuricCellsSpecialOfferWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreAuricCellsSpecialOfferWidget) { return 0; }
