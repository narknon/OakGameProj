#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HavokNavSeed -FallbackName=HavokNavSeed
#include "UObject/NoExportTypes.h"
#include "EGbxUserEdgeDirection.h"
#include "HavokUserEdgeComponent.generated.h"

class UGbxUserEdge;
class AActor;
class USceneComponent;
class UHavokUserEdgeComponent;
class UHavokUserEdge;


class GBXNAV_API IHavokNavSeed : public IInterface
{
};


UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UHavokUserEdgeComponent : public UPrimitiveComponent, public IHavokNavSeed {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    FTransform EdgeEnd;
    
    UPROPERTY(EditAnywhere)
    float EdgeBeginWidth;
    
    UPROPERTY(EditAnywhere)
    float EdgeEndWidth;
    
    UPROPERTY(EditAnywhere)
    EGbxUserEdgeDirection Direction;
    
    UPROPERTY(EditAnywhere)
    UGbxUserEdge* GbxUserEdge;
    
    UPROPERTY(EditAnywhere)
    float TeleportRadius;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<UHavokUserEdgeComponent*> TeleportEdges;
    
    UPROPERTY(EditAnywhere)
    bool bAnchorEnd;
    
    UPROPERTY(VisibleAnywhere)
    AActor* EndAnchorBase;
    
    UPROPERTY(VisibleAnywhere)
    FTransform EndAnchorTransform;
    
    UPROPERTY(Export, Transient)
    USceneComponent* RegisteredEndAnchorRoot;
    
    UPROPERTY(NonPIEDuplicateTransient, VisibleAnywhere)
    uint32 EdgeID;
    
    UPROPERTY()
    TSubclassOf<UHavokUserEdge> UserEdge;
    
public:
    UHavokUserEdgeComponent();
    UFUNCTION(BlueprintCallable)
    void SetEdgeEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEdgeEnabled() const;
    
private:
    UFUNCTION()
    void AnchorDestroyed(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

