#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxLobbyWidgetPlayerItem.generated.h"

class UPlayerIdentityWidget;
class UOakGameInstance;
class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxLobbyWidgetPlayerItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UPlayerIdentityWidget* PlayerIdWidget;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContextualMenuAnchor;
    
    UPROPERTY(Transient)
    UOakGameInstance* CachedGameInstance;
    
    UPROPERTY(Transient)
    FString CurrentStateFrame;
    
public:
    UGFxLobbyWidgetPlayerItem();
};

