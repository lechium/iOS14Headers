/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookUtility/BUZipArchive.h>

@protocol OS_dispatch_queue;
@class NSObject, BUZipFileDescriptorWrapper, NSURL;

@interface BUZipFileArchive : BUZipArchive {

	unsigned long long _archiveLength;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BUZipFileDescriptorWrapper* _fdWrapper;
	NSURL* _temporaryDirectoryURL;
	NSURL* _URL;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) BUZipFileDescriptorWrapper * fdWrapper;                //@synthesize fdWrapper=_fdWrapper - In the implementation block
@property (nonatomic,retain) NSURL * temporaryDirectoryURL;                         //@synthesize temporaryDirectoryURL=_temporaryDirectoryURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
+(void)readArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)isZipArchiveAtFD:(int)arg1 ;
+(BOOL)isZipArchiveAtURL:(id)arg1 error:(id*)arg2 ;
+(id)zipArchiveFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)debugDescription;
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isValid;
-(NSURL *)temporaryDirectoryURL;
-(void)setTemporaryDirectoryURL:(NSURL *)arg1 ;
-(unsigned long long)archiveLength;
-(id)initForReadingFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)openWithURL:(id)arg1 error:(id*)arg2 ;
-(void)removeTemporaryDirectory;
-(BUZipFileDescriptorWrapper *)fdWrapper;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg1 ;
-(BOOL)reopenWithTemporaryURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithWriter:(id)arg1 forReadingFromURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 error:(id*)arg2 ;
-(id)newArchiveReadChannel;
-(void)setFdWrapper:(BUZipFileDescriptorWrapper *)arg1 ;
@end

