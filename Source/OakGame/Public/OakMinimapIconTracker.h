#pragma once
#include "CoreMinimal.h"
#include "OakMinimapIconComponentDelegateDelegate.h"
#include "UObject/Object.h"
#include "OakMinimapIconTracker.generated.h"

class UOakMinimapIconComponent;

UCLASS()
class OAKGAME_API UOakMinimapIconTracker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FOakMinimapIconComponentDelegate BeginTrackingDelegate;
    
    UPROPERTY(Transient)
    FOakMinimapIconComponentDelegate UpdateTrackingDelegate;
    
    UPROPERTY(Transient)
    FOakMinimapIconComponentDelegate EndTrackingDelgate;
    
private:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UOakMinimapIconComponent>> TrackedComponents;
    
public:
    UOakMinimapIconTracker();
};

