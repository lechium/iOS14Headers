/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:35 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class Project, NSString, NSMutableArray, NSMutableSet, NSMutableDictionary, PVEffect, NSSet;

@interface ProjectChangeLog : NSObject {

	Project* m_project;
	NSString* m_themeID;
	NSMutableArray* m_editList;
	NSMutableArray* m_backgroundAudioClips;
	NSMutableArray* m_foregroundAudioClips;
	NSMutableArray* m_cutaways;
	NSMutableSet* m_clipsNeedingDisplay;
	NSMutableSet* m_capturedClips;
	NSMutableArray* m_clipChangeLogs;
	BOOL m_useThemeAudio;
	BOOL m_fadeInFromBlack;
	BOOL m_fadeOutToBlack;
	NSString* m_audioTimePitchAlgorithm;
	NSMutableDictionary* m_trailerDict;
	PVEffect* _filterEffect;

}

@property (nonatomic,readonly) NSSet * capturedClips; 
@property (nonatomic,readonly) NSSet * clipsNeedingDisplay; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy) PVEffect * filterEffect;                      //@synthesize filterEffect=_filterEffect - In the implementation block
-(void)dealloc;
-(id)initWithProject:(id)arg1 ;
-(BOOL)hasChanges;
-(id)description;
-(void)setFilterEffect:(PVEffect *)arg1 ;
-(PVEffect *)filterEffect;
-(void)captureProject:(id)arg1 ;
-(void)captureClip:(id)arg1 needsDisplay:(BOOL)arg2 ;
-(id)redoProjectChangeLog;
-(id)restoreProject;
-(NSSet *)capturedClips;
-(NSSet *)clipsNeedingDisplay;
@end
