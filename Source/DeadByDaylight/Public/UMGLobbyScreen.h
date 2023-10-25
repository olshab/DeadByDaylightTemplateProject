#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnJoinedLobbyLeaved.h"
#include "OnSearchingLobbyCancelled.h"
#include "UMGLobbyScreen.generated.h"

class UUMGFogWidget;
class UUMGLobbyOfferingWidget;
class UWidgetSwitcher;
class UUMGLobbySearchingWidget;
class UUMGLobbyJoinedWidget;

UCLASS(EditInlineNew)
class UUMGLobbyScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Export)
	UUMGLobbySearchingWidget* LobbySearchingWidget;

	UPROPERTY(BlueprintAssignable)
	FOnJoinedLobbyLeaved OnJoinedLobbyLeaved;

	UPROPERTY(BlueprintAssignable)
	FOnSearchingLobbyCancelled OnSearchingLobbyCancelled;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UWidgetSwitcher* LobbySwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUMGLobbyJoinedWidget* LobbyJoinedWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUMGLobbyOfferingWidget* OfferingWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	UUMGFogWidget* FogWidget;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleSearchingLobbyCancel();

	UFUNCTION(BlueprintCallable)
	void HandleJoinedLobbyLeave();

public:
	UUMGLobbyScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLobbyScreen) { return 0; }
