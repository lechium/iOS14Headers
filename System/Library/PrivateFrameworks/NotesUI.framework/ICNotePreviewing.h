/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ICSearchResult;


@protocol ICNotePreviewing <NSObject>
@property (nonatomic,readonly) id<ICSearchIndexableNote> note; 
@property (nonatomic,readonly) ICSearchResult * searchResult; 
@required
-(ICSearchResult *)searchResult;
-(id<ICSearchIndexableNote>)note;
-(void)setupPreview;
-(id)initWithNote:(id)arg1;
-(id)initWithNote:(id)arg1 searchResult:(id)arg2;
-(void)setupPreviewWithInitialFrame:(CGRect)arg1;

@end

