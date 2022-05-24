#pragma once
#include "CoreMinimal.h"
#include "EClothingWindMethod.h"
#include "ClothConstraintSetup.h"
#include "UObject/NoExportTypes.h"
#include "ClothConfig.generated.h"

USTRUCT(BlueprintType)
struct FClothConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EClothingWindMethod WindMethod;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetup VerticalConstraintConfig;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetup HorizontalConstraintConfig;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetup BendConstraintConfig;
    
    UPROPERTY(EditAnywhere)
    FClothConstraintSetup ShearConstraintConfig;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionStiffness;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionCullScale;
    
    UPROPERTY(EditAnywhere)
    FVector Damping;
    
    UPROPERTY(EditAnywhere)
    float Friction;
    
    UPROPERTY(EditAnywhere)
    float WindDragCoefficient;
    
    UPROPERTY(EditAnywhere)
    float WindLiftCoefficient;
    
    UPROPERTY(EditAnywhere)
    FVector LinearDrag;
    
    UPROPERTY(EditAnywhere)
    FVector AngularDrag;
    
    UPROPERTY(EditAnywhere)
    FVector LinearInertiaScale;
    
    UPROPERTY(EditAnywhere)
    FVector AngularInertiaScale;
    
    UPROPERTY(EditAnywhere)
    FVector CentrifugalInertiaScale;
    
    UPROPERTY(EditAnywhere)
    float SolverFrequency;
    
    UPROPERTY(EditAnywhere)
    float StiffnessFrequency;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    float TetherStiffness;
    
    UPROPERTY(EditAnywhere)
    float TetherLimit;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveSpringStiffness;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveDamperStiffness;
    
    CLOTHINGSYSTEMRUNTIME_API FClothConfig();
};

