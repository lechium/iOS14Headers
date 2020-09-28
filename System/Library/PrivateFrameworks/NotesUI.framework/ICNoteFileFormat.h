/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICNoteFileFormat : NSObject
+(id)pathExtension;
+(id)fileUTType;
+(BOOL)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id*)arg3 ;
+(void)exportNote:(id)arg1 toURL:(id)arg2 ;
-(id)allowedFileTypes;
-(BOOL)canHandleFileURL:(id)arg1 ;
-(void)cancelParsing;
-(void)parseFileURL:(id)arg1 newNoteBlock:(/*^block*/id)arg2 updatedNoteBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 completedParsingBlock:(/*^block*/id)arg5 ;
-(void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
