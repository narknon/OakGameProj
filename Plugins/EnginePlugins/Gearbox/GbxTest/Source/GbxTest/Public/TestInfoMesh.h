#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TestInfoMesh.generated.h"

USTRUCT(BlueprintType)
struct FTestInfoMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FBoxSphereBounds Bounds;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SocketCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasSockets;
    
    GBXTEST_API FTestInfoMesh();
};

