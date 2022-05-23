#pragma once
#include "CoreMinimal.h"
#include "OakGFxMenuData.h"
#include "GFxStatusMenuSubmenuData.generated.h"

UCLASS()
class OAKGAME_API UGFxStatusMenuSubmenuData : public UOakGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString IconFrameString;
    
    UPROPERTY(EditDefaultsOnly)
    FText StatusMenuSubMenuName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceMenuName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName;
    
    UPROPERTY(EditAnywhere)
    FName StandInConfigName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWantsBackgroundEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnabledInGearUpMode;
    
    UPROPERTY(EditAnywhere)
    FName MenuID;
    
    UPROPERTY(EditAnywhere)
    int32 MenuPriority;
    
    UGFxStatusMenuSubmenuData();
};

