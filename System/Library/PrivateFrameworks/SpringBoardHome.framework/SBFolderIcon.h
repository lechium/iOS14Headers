/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:13 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIcon.h>
#import <libobjc.A.dylib/SBFolderObserver.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/SBIconIndexNodeObserver.h>

@class NSHashTable, NSMutableSet, SBFolder, NSString;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver> {

	NSHashTable* _nodeObservers;
	NSMutableSet* _finishedDownloadIdentifiers;
	long long _progressState;
	double _progressPercent;
	CFRunLoopObserverRef _updateIconRunLoopObserver;
	SBFolder* _folder;

}

@property (nonatomic,readonly) SBFolder * folder;                   //@synthesize folder=_folder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasIconImage;
-(void)localeChanged;
-(void)addNodeObserver:(id)arg1 ;
-(SBFolder *)folder;
-(id)containedNodeIdentifiers;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(id)nodeIdentifier;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(void)removeNodeObserver:(id)arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)nodeDidMoveContainedNodes:(id)arg1 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidateUpdateIconRunLoopObserver;
-(id)leafIconsWithBadgesSortedByImportance;
-(void)iconLaunchEnabledDidChange:(id)arg1 ;
-(id)iconAtListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2 ;
-(void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2 ;
-(BOOL)isFolderIcon;
-(BOOL)canBeAddedToMultiItemDrag;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(long long)progressState;
-(double)progressPercent;
-(void)dealloc;
-(void)_updateProgress;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)_containedIconLaunchEnabledDidUpdate:(id)arg1 ;
-(void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(BOOL)canBeAddedToSubfolder;
-(id)rootFolder;
-(BOOL)shouldAnimateProgress;
-(id)displayNameForLocation:(id)arg1 ;
-(BOOL)isProgressPaused;
-(void)_updateBadgeValue;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)updateLabel;
-(void)_performDelayedIconUpdates;
-(id)badgeNumberOrString;
-(void)_containedIconAccessoriesDidUpdate:(id)arg1 ;
-(void)_containedIconImageChanged:(id)arg1 ;
-(unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1 ;
-(Class)iconImageViewClassForLocation:(id)arg1 ;
-(id)initWithFolder:(id)arg1 ;
-(void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3 ;
-(unsigned long long)listIndexForContainedIcon:(id)arg1 ;
-(void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2 ;
-(void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2 ;
-(void)rootFolderDelegateDidChange:(id)arg1 ;
-(NSString *)description;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
@end
