#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationChooser.h"
#include "ActiveAmbientLocationChooser_RandomWithinActor.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser_RandomWithinActor : public UActiveAmbientLocationChooser {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<AActor> WithinActor;
    
public:
    UActiveAmbientLocationChooser_RandomWithinActor();
};

