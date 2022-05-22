#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxParam.h"
#include "GbxCondition_AttackedRecently.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_AttackedRecently : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxParam AttackedWithin;
    
public:
    UGbxCondition_AttackedRecently();
};

