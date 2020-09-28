/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>
#import <TSReading/TSDContainerRep.h>
#import <TSReading/TSWPTextEditingHostRep.h>
#import <TSReading/TSKHighlightArrayControllerProtocol.h>

@protocol TSKSearchReference;
@class TSWPShapeRep, TSKHighlightArrayController, NSObject, NSArray, NSString;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep, TSWPTextEditingHostRep, TSKHighlightArrayControllerProtocol> {

	TSWPShapeRep* _editingRep;
	TSKHighlightArrayController* _pulseArrayController;
	TSKHighlightArrayController* _highlightArrayController;
	NSObject*<TSKSearchReference> _activeSearchReference;
	NSArray* _searchReferences;

}

@property (nonatomic,retain) TSKHighlightArrayController * pulseArrayController;                  //@synthesize pulseArrayController=_pulseArrayController - In the implementation block
@property (nonatomic,retain) TSKHighlightArrayController * highlightArrayController;              //@synthesize highlightArrayController=_highlightArrayController - In the implementation block
@property (nonatomic,retain) NSObject*<TSKSearchReference> activeSearchReference;                 //@synthesize activeSearchReference=_activeSearchReference - In the implementation block
@property (nonatomic,readonly) BOOL useFindOverlayers; 
@property (nonatomic,retain) NSArray * searchReferences;                                          //@synthesize searchReferences=_searchReferences - In the implementation block
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)willBeRemoved;
-(void)updateHighlights;
-(id)hitRep:(CGPoint)arg1 ;
-(id)childReps;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(NSObject*<TSKSearchReference>)activeSearchReference;
-(void)setActiveSearchReference:(NSObject*<TSKSearchReference>)arg1 ;
-(void)pulseAnimationDidStop:(id)arg1 ;
-(CGPathRef)newPathForSearchReference:(id)arg1 ;
-(id)imageForSearchReference:(id)arg1 forPath:(CGPathRef)arg2 shouldPulsate:(BOOL)arg3 ;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(BOOL)canSelectChildRep:(id)arg1 ;
-(void)selectChildRep:(id)arg1 ;
-(id)overlayLayers;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(void)p_activeFindHighlightChangedNotification:(id)arg1 ;
-(void)p_findUIStateChangedNotification:(id)arg1 ;
-(void)p_setActiveSearchReference:(id)arg1 ;
-(void)p_setSearchReferencesToHighlight:(id)arg1 ;
-(TSKHighlightArrayController *)pulseArrayController;
-(void)setPulseArrayController:(TSKHighlightArrayController *)arg1 ;
-(void)setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2 ;
-(BOOL)doesRepContainSearchReference:(id)arg1 ;
-(void)updateFindAnimationWithAnimatingPulse:(BOOL)arg1 ;
-(NSArray *)searchReferences;
-(void)setSearchReferences:(NSArray *)arg1 ;
-(id)lineSearchReferencesForSearchReference:(id)arg1 ;
-(void)setHighlightArrayController:(TSKHighlightArrayController *)arg1 ;
-(TSKHighlightArrayController *)highlightArrayController;
-(BOOL)useFindOverlayers;
-(void)tswpTextEditingDidEndEditing:(id)arg1 ;
-(void)drawTextBackground:(CGContextRef)arg1 insetRect:(CGRect)arg2 pulsating:(BOOL)arg3 ;
@end
