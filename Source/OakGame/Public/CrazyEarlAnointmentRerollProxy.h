#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "CrazyEarlAnointmentRerollProxy.generated.h"

class UMeshComponent;

UCLASS(NonTransient)
class ACrazyEarlAnointmentRerollProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemPreviewMeshTag;
    
    UPROPERTY(EditAnywhere)
    FName ItemPreviewSocket;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* DisplayMesh;
    
    ACrazyEarlAnointmentRerollProxy();
};

