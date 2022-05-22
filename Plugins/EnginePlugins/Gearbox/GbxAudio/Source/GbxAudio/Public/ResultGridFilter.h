#pragma once
#include "CoreMinimal.h"
#include "EFilterResultOperation.h"
#include "ResultGridFilter.generated.h"

USTRUCT()
struct FResultGridFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Iterations;
    
    UPROPERTY(EditAnywhere)
    EFilterResultOperation ResultOperation;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> StructuringElements;
    
    GBXAUDIO_API FResultGridFilter();
};

