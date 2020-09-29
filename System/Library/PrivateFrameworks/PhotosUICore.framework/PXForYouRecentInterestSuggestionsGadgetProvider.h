/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>

@class PXPhotoKitAdjustedUIMediaProvider, PXForYouSuggestionAssetsDataSourceManager, PXAssetReference, NSString;

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate> {

	PXPhotoKitAdjustedUIMediaProvider* _oneUpMediaProvider;
	PXForYouSuggestionAssetsDataSourceManager* _oneUpDataSourceManager;
	PXAssetReference* _oneUpInitialAssetReference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(BOOL)oneUpPresentationWantsShowInLibraryButton:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(id)init;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_prepareForOneUpPresentationForSuggestion:(id)arg1 ;
-(void)presentOneUpForSuggestion:(id)arg1 animated:(BOOL)arg2 ;
-(id)suggestionGadgetPreviewController:(id)arg1 ;
-(void)suggestionGadget:(id)arg1 commitViewController:(id)arg2 ;
-(void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(BOOL)arg3 ;
-(void)_insertRemoveSuggestionActionIntoPreview:(id)arg1 forGadget:(id)arg2 ;
-(void)_fileRadarForSuggestion:(id)arg1 ;
-(void)_addTTRActionIntoPreview:(id)arg1 forGadget:(id)arg2 ;
@end
