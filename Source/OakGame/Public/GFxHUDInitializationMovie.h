#pragma once
#include "CoreMinimal.h"
#include "EHUDInitAnimWidgetTarget.h"
#include "GbxGFxMenu.h"
#include "GFxHUDInitializationMovie.generated.h"

class UGbxGFxObject;
class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxHUDInitializationMovie : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DefaultBootText;
    
    UPROPERTY(EditAnywhere)
    FString HealthBarDisplayName;
    
    UPROPERTY(EditAnywhere)
    FString XPBarDisplayName;
    
    UPROPERTY(EditAnywhere)
    FString MinimapDisplayName;
    
    UPROPERTY(EditAnywhere)
    FString MissionTrackerDisplayName;
    
    UPROPERTY(EditAnywhere)
    FString AmmoBarDisplayName;
    
    UPROPERTY(EditAnywhere)
    FString ShieldBarDisplayName;
    
    UPROPERTY(EditAnywhere)
    FString GrenadeBarDisplayName;
    
    UPROPERTY(EditAnywhere)
    FString DefaultWidgetDisplayName;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* InitializationAnims;
    
    UPROPERTY(Transient)
    UGbxTextField* InitializationText;
    
    UPROPERTY(Transient)
    UGbxTextField* WidgetLabel;
    
    UPROPERTY(Transient)
    FString QueuedInitAnim;
    
    UPROPERTY(Transient)
    EHUDInitAnimWidgetTarget QueuedWidgetTarget;
    
public:
    UGFxHUDInitializationMovie();
private:
    UFUNCTION()
    void extInitAnimationTrigger() const;
    
    UFUNCTION()
    void extInitAnimationComplete() const;
    
};

