/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ENNoteRef, ENNotebook, NSString, NSDate;

@interface ENSessionFindNotesResult : NSObject {

	BOOL _hasResources;
	int _updateSequenceNum;
	ENNoteRef* _noteRef;
	ENNotebook* _notebook;
	NSString* _title;
	NSDate* _created;
	NSDate* _updated;

}

@property (assign,nonatomic) int updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) ENNoteRef * noteRef;                //@synthesize noteRef=_noteRef - In the implementation block
@property (nonatomic,retain) ENNotebook * notebook;              //@synthesize notebook=_notebook - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * created;                   //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSDate * updated;                   //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) BOOL hasResources;                  //@synthesize hasResources=_hasResources - In the implementation block
-(NSDate *)created;
-(NSString *)title;
-(NSDate *)updated;
-(void)setCreated:(NSDate *)arg1 ;
-(ENNoteRef *)noteRef;
-(BOOL)hasResources;
-(void)setUpdated:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(int)updateSequenceNum;
-(void)setUpdateSequenceNum:(int)arg1 ;
-(ENNotebook *)notebook;
-(void)setNotebook:(ENNotebook *)arg1 ;
-(void)setNoteRef:(ENNoteRef *)arg1 ;
-(void)setHasResources:(BOOL)arg1 ;
@end

