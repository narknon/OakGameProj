#pragma once
#include "CoreMinimal.h"
#include "TestPolicy.h"
#include "TestPolicyContent.generated.h"

class UObject;

UCLASS()
class UTestPolicyContent : public UTestPolicy {
    GENERATED_BODY()
public:
    UTestPolicyContent();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnValidForImport(const UObject* ImportObject, bool& Result) const;
    
};

