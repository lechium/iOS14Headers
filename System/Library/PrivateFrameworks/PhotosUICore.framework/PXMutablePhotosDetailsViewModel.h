/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXSectionedSelectionManager, NSSet;


@protocol PXMutablePhotosDetailsViewModel <NSObject>
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (assign,nonatomic) BOOL supportsSelection; 
@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager; 
@property (assign,nonatomic) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,retain) NSSet * disabledActionTypes; 
@required
-(PXSectionedSelectionManager *)selectionManager;
-(BOOL)isSelecting;
-(void)setSelectionManager:(id)arg1;
-(BOOL)supportsFaceMode;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(id)arg1;
-(void)setSelecting:(BOOL)arg1;
-(BOOL)supportsSelection;
-(void)setSupportsSelection:(BOOL)arg1;
-(void)setSupportsFaceMode:(BOOL)arg1;

@end
