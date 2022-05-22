#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxCondition.h"
#include "GbxParam.h"
#include "GbxCondition_SensedRecently.generated.h"

class UAISense;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_SensedRecently : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxParam SensedWithin;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAISense>> Senses;
    
    UPROPERTY(EditAnywhere)
    bool bAnyTarget;
    
public:
    UGbxCondition_SensedRecently();
};

