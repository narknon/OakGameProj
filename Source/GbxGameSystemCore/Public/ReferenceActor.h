#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ReferenceActor.generated.h"

UCLASS()
class AReferenceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PreviewClass;
    
    AReferenceActor();
    UFUNCTION()
    void EnumeratePreviewClasses(TArray<FName>& ClasssList) const;
    
};

