#pragma once
#include "CoreMinimal.h"
#include "StanceDataProvider.h"
#include "ConditionalStance.h"
#include "StanceDataSelector.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UStanceDataSelector : public UStanceDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FConditionalStance> StancePriorityList;
    
protected:
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* DefaultStanceProvider;
    
public:
    UStanceDataSelector();
};

