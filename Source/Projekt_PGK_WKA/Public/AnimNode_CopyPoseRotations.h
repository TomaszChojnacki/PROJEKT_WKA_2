// Copyright Epic Games, Inc. All Rights Reserved.
/*
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_CopyPoseRotations.generated.h"



class USkeletalMeshComponent;
struct FAnimInstanceProxy;

USTRUCT()
struct FProjekt_PGK_WKA_BoneSourceToTargetMapping
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Settings)
	FName TargetBoneName;

	UPROPERTY(EditAnywhere, Category = Settings)
	TArray<FName> SourceBoneNames;

	UPROPERTY(EditAnywhere, Category = Settings)
	bool bIncludeFullTransform = false;

	UPROPERTY(EditAnywhere, Category = Settings)
	bool bIncludeInputPose = false;
};

struct FProjekt_PGK_WKA_BoneSourceSettings
{
	TArray<int32, TInlineAllocator<2>> SourceBoneIndices;
	bool bIncludeFullTransform;
	bool bIncludeInputPose;
};



USTRUCT(BlueprintInternalUseOnly)
struct PROJEKT_PGK_WKA_API FAnimNode_CopyPoseRotations : public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink In;


	UPROPERTY(BlueprintReadWrite, transient, Category = Copy, meta = (PinShownByDefault))
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;

	UPROPERTY(EditAnywhere, Category = Copy, meta = (NeverAsPin))
	TArray<FProjekt_PGK_WKA_BoneSourceToTargetMapping> BoneMapping;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Copy, meta = (NeverAsPin))
	uint8 bUseAttachedParent : 1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Copy, meta = (NeverAsPin))
	uint8 bCopyCurves : 1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Copy, meta = (NeverAsPin))
	FName RootBoneToCopy;

	FAnimNode_CopyPoseRotations();

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual bool HasPreUpdate() const override { return true; }
	virtual void PreUpdate(const UAnimInstance* InAnimInstance) override;
	// End of FAnimNode_Base interface

private:
	// this is source mesh references, so that we could compare and see if it has changed
	TWeakObjectPtr<USkeletalMeshComponent>	CurrentlyUsedSourceMeshComponent;
	TWeakObjectPtr<USkeletalMesh>			CurrentlyUsedSourceMesh;
	TWeakObjectPtr<USkeletalMesh>			CurrentlyUsedMesh;

	// target mesh 
	TWeakObjectPtr<USkeletalMesh>			CurrentlyUsedTargetMesh;
	// cache of target space bases to source space bases
	TMap<int32, FProjekt_PGK_WKA_BoneSourceSettings> BoneMapToSourceSettings;
	TMap<FName, SmartName::UID_Type> CurveNameToUIDMap;

	// Cached transforms, copied on the game thread
	TArray<FTransform> SourceMeshTransformArray;

	// Cached curves, copied on the game thread
	FBlendedHeapCurve SourceCurves;

	// Cached attributes, copied on the game thread
	UE::Anim::FHeapAttributeContainer SourceCustomAttributes;

	// reinitialize mesh component 
	void ReinitializeMeshComponent(USkeletalMeshComponent* NewSkeletalMeshComponent, USkeletalMeshComponent* TargetMeshComponent);
	void RefreshMeshComponent(USkeletalMeshComponent* TargetMeshComponent);
};
*/