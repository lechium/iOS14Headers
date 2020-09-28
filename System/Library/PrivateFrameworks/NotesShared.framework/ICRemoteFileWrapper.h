/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _remoteURL;
	NSData* _cachedData;

}

@property (nonatomic,retain) NSURL * remoteURL;                //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSData * cachedData;              //@synthesize cachedData=_cachedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)serializedRepresentation;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(BOOL)isDirectory;
-(id)fileWrappers;
-(void)setCachedData:(NSData *)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)symbolicLinkDestinationURL;
-(id)addFileWrapper:(id)arg1 ;
-(NSURL *)remoteURL;
-(NSData *)cachedData;
-(id)preferredFilename;
-(id)initWithCoder:(id)arg1 ;
-(id)dataWithError:(id*)arg1 ;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(void)removeFileWrapper:(id)arg1 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)regularFileContents;
-(BOOL)isSymbolicLink;
-(id)fileAttributes;
-(id)filename;
-(id)initWithRemoteURL:(id)arg1 ;
@end
