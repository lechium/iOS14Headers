/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData, NSDate, NSString;

@interface NSPageData : NSData {

	NSData* data;
	NSDate* _originalFileModDate;
	NSString* _originalFilePath;

}
+(void)initialize;
+(long long)_umask;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(unsigned long long)writeFd:(long long)arg1 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(id)data;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 withFileAttributes:(id)arg2 ;
-(void)_setOriginalFileInfoFromFileAttributes:(id)arg1 ;
-(const void*)bytes;
-(id)initFromSerializerStream:(id)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)writeFile:(id)arg1 ;
-(unsigned long long)length;
-(id)_mappedFile;
-(id)deserializer;
-(id)init;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
@end

