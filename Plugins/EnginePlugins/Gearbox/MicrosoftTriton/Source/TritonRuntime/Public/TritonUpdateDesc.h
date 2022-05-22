#pragma once
#include "CoreMinimal.h"
#include "TritonUpdateDesc.generated.h"

USTRUCT(BlueprintType)
struct FTritonUpdateDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    bool bCleanTempDirectory;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bExportVoxelizedRegion;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCreateJobConfig;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCreateTaskImages;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bRunTasks;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCreateCompressedVoxMap;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCollateResults;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bGenerateLongDistanceProbes;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bFixupDirectionalReciprocity;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bIncorporateNewACE;
    
    TRITONRUNTIME_API FTritonUpdateDesc();
};

