#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SceneBodySwitchAction.generated.h"

UCLASS(Abstract, CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API USceneBodySwitchAction : public UObject {
    GENERATED_BODY()
public:
    USceneBodySwitchAction();
};

