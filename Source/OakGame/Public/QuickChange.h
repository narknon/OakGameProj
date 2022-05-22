#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "UObject/NoExportTypes.h"
#include "QuickChange.generated.h"

class UOakCustomizationData;

UCLASS()
class AQuickChange : public AAdvancedInteractiveObject {
    GENERATED_BODY()
public:
    AQuickChange();
    UFUNCTION(BlueprintImplementableEvent)
    void OnSaveGameRenamed(const FText& NewName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRespec();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickedNewSkinColor(int32 Index, FLinearColor Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickedNewSkin(UOakCustomizationData* NewSkin);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickedNewHead(UOakCustomizationData* NewHead);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickedNewEmote(UOakCustomizationData* NewEmote);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickedNewECHOTheme(UOakCustomizationData* NewECHOTheme);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickedNewBody(UOakCustomizationData* NewBody);
    
};

