#pragma once
#include "CoreMinimal.h"
#include "CreditsTextureCache.h"
#include "GbxGFxMenu.h"
#include "CreditsSection.h"
#include "UObject/NoExportTypes.h"
#include "CreditsTextFieldInfo.h"
#include "CreditsLineInfo.h"
#include "Engine/LatentActionManager.h"
#include "GFxCreditsMenu.generated.h"

class UGbxGFxObject;
class AOakPlayerController;
class UGbxMenuData;

UCLASS()
class OAKGAME_API UGFxCreditsMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FCreditsSection> CreditsSections;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SizeTextureCache;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSoftObjectPath> CreditsImages;
    
    UPROPERTY(EditDefaultsOnly)
    float InsertPosYDelta;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumCreditsLinesCached;
    
    UPROPERTY(Transient)
    TArray<FCreditsTextureCache> CreditsTextureCache;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Image;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CreditsContainer;
    
    UPROPERTY(Transient)
    TArray<FCreditsLineInfo> CreditsLineInfos;
    
    UPROPERTY(Transient)
    TArray<FCreditsTextFieldInfo> TextFieldInfos;
    
public:
    UGFxCreditsMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static void PushCreditsMenuFor(AOakPlayerController* Target, FLatentActionInfo LatentInfo, bool bDismissWhenEndReached, UGbxMenuData* OverrideCreditsMenuData) const;
    
private:
    UFUNCTION()
    void OnImageLoaded() const;
    
};

