#pragma once
#include "CoreMinimal.h"
#include "RouteSection.generated.h"

class AActor;

USTRUCT()
struct FRouteSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Start;
    
    UPROPERTY()
    AActor* End;
    
    GBXAI_API FRouteSection();
};

