#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxDragDropManager.generated.h"

class UGbxGFxButton;

UCLASS()
class GBXUI_API UGbxGFxDragDropManager : public UObject {
    GENERATED_BODY()
public:
    UGbxGFxDragDropManager();
protected:
    UFUNCTION()
    void OnDropButtonUnhovered(UGbxGFxButton* UnhoveredButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnDropButtonHovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo);
    
};

