#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "ECompoundConditionOperatorType.h"
#include "GbxCondition_List.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_List : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ECompoundConditionOperatorType Operator;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UGbxCondition*> Conditions;
    
public:
    UGbxCondition_List();
    UFUNCTION()
    bool RequiresNativeClass() const;
    
    UFUNCTION()
    UClass* GetRequiredInterface() const;
    
};

