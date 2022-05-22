#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_OffsetViewModel.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_OffsetViewModel : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SplitScreenLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector VerticalSplitScreenLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector QuadSplitScreenLocationOffset;
    
    UCameraBehavior_OffsetViewModel();
};

