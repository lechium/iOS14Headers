/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSDateFormatter, NSFileHandle;

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {

	NSDateFormatter* _dateFormatter;
	BOOL _shouldCloseFileHandle;
	BOOL _isStandardErrorFileBackend;
	NSFileHandle* _fileHandle;

}

@property (retain) NSFileHandle * fileHandle;                    //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) BOOL shouldCloseFileHandle;                   //@synthesize shouldCloseFileHandle=_shouldCloseFileHandle - In the implementation block
@property (assign) BOOL isStandardErrorFileBackend;              //@synthesize isStandardErrorFileBackend=_isStandardErrorFileBackend - In the implementation block
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
+(id)standardErrorFileBackend;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(id)initWithFileHandle:(id)arg1 ;
-(void)dealloc;
-(NSFileHandle *)fileHandle;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(BOOL)outputsToDebuggerConsole;
-(id)initWithLogFileURL:(id)arg1 ;
-(id)writeOpenFileAtURL:(id)arg1 ;
-(BOOL)shouldCloseFileHandle;
-(void)setShouldCloseFileHandle:(BOOL)arg1 ;
-(BOOL)isStandardErrorFileBackend;
-(void)setIsStandardErrorFileBackend:(BOOL)arg1 ;
@end

