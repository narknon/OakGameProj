#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SingularityPullableInterface.generated.h"

class USingularityComponent;

UINTERFACE(Blueprintable)
class OAKGAME_API USingularityPullableInterface : public UInterface {
    GENERATED_BODY()
};

class OAKGAME_API ISingularityPullableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnSingularityPullEnd(USingularityComponent* SingularityComponent);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSingularityPullBegin(USingularityComponent* SingularityComponent);
    
    UFUNCTION(BlueprintNativeEvent)
    float GetPullScale();
    
};

