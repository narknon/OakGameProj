#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/PrimitiveComponent.h"
#include "PreviewState.h"
#include "PreviewComponent.generated.h"

class USkinnedMeshComponent;
class AActor;
class UBlueprint;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UPreviewComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bSpawnInPIE;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bPreviewEnabled;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TSubclassOf<AActor> PreviewActor;
    
    UPROPERTY(DuplicateTransient, Transient)
    FPreviewState PreviewState;
    
    UPROPERTY(Transient)
    bool bEnabled;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USkinnedMeshComponent> SkinnedMeshComponent;
    
public:
    UPreviewComponent();
protected:
    UFUNCTION()
    void OnBlueprintCompiled(UBlueprint* BP);
    
};

