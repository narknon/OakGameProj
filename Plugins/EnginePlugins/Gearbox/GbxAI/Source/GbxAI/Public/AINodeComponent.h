#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HavokNavSeed -FallbackName=HavokNavSeed
#include "AINodeLink.h"
#include "AINodeEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "AINodeComponent.generated.h"

class UAINodeComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UAINodeComponent : public UPrimitiveComponent, public IHavokNavSeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bUseRouteSystem;
    
    UPROPERTY(EditAnywhere)
    float RouteFindNavHeight;
    
    UPROPERTY(EditAnywhere)
    bool bDrawRouteFindNavHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArrivalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArrivalHeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSnapToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSnapDistance;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FAINodeLink> LinksTo;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<AActor*> EditCache;
    
    UPROPERTY(Export, Transient)
    TArray<UAINodeComponent*> LinksFrom;
    
    UPROPERTY(BlueprintAssignable)
    FAINodeEvent OnPawnArrivedNode;
    
    UPROPERTY(BlueprintAssignable)
    FAINodeEvent OnPawnDepartedNode;
    
protected:
    UPROPERTY(Transient)
    bool bLinkOnAltDrag;
    
    UPROPERTY(Transient)
    bool bVisualizeWhileUnlinked;
    
    UPROPERTY(Transient)
    bool bRouteSelected;
    
    UPROPERTY(Transient)
    bool bSelected;
    
public:
    UAINodeComponent();
    UFUNCTION(BlueprintPure)
    AActor* SelectNextNode() const;
    
    UFUNCTION(BlueprintPure)
    bool HasLinkTo(AActor* Node) const;
    
    UFUNCTION(BlueprintPure)
    bool HasLinkFrom(AActor* Node) const;
    
    UFUNCTION(BlueprintPure)
    bool HasArrived(FVector Point, float Error) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLinkedNodeNum() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLinkedNode(int32 I) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateLinkTo(AActor* Node, float Weight);
    
    UFUNCTION(BlueprintCallable)
    bool BreakLinkTo(AActor* Node);
    
    
    // Fix for true pure virtual functions not being implemented
};

