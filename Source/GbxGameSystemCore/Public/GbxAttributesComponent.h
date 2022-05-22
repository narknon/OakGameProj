#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GbxAttributesComponent.generated.h"

class UGbxAttributeSet;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxAttributesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Replicated)
    TArray<UGbxAttributeSet*> AttributeSets;
    
    UGbxAttributesComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    bool IsAttributeSetClassUnrelatedToExistingSet(const UClass* AttributeSetClass) const;
    
};

