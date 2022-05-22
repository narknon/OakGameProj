#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_ActorIsOfClass.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_ActorIsOfClass : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UClass* InputClass;
    
    UPROPERTY(EditAnywhere)
    bool bCheckAbsolute;
    
public:
    UGbxCondition_ActorIsOfClass();
};

