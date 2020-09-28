/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long length; 
@property (readonly) const void* bytes; 
+(id)_alloc;
+(id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataWithContentsOfURL:(id)arg1 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
+(id)dataWithData:(id)arg1 ;
+(id)_newZeroingDataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
+(BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)data;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataWithContentsOfFile:(id)arg1 ;
+(id)dataWithContentsOfMappedFile:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)CKDataWithHexString:(id)arg1 ;
+(id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_providesConcreteBacking;
-(BOOL)isNSData__;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)_decodeBase64EncodedCharacterBuffer:(const char*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char*)arg4 bufferLength:(unsigned long long)arg5 state:(SCD_Struct_NS10*)arg6 ;
-(unsigned long long)_cfTypeID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_dataWithCompressionOperation:(int)arg1 algorithm:(long long)arg2 ;
-(id)base64EncodedStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(Class)classForCoder;
-(id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2 ;
-(id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2 ;
-(id)compressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(const void*)bytes;
-(id)debugDescription;
-(id)_web_guessedMIMETypeForExtension:(id)arg1 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)length;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_web_guessedMIMETypeForXML;
-(id)_web_parseRFC822HeaderFields;
-(id)_replaceCString:(const char*)arg1 withCString:(const char*)arg2 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_web_guessedMIMEType;
-(id)_asciiDescription;
-(id)base64EncodedDataWithOptions:(unsigned long long)arg1 ;
-(id)base64Encoding;
-(id)initWithBase64Encoding:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_isDispatchData;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)getBytes:(void*)arg1 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)hash;
-(BOOL)_allowsDirectEncoding;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_createDispatchData;
-(BOOL)_canReplaceWithDispatchDataForXPCCoder;
-(BOOL)_isCompact;
-(id)description;
-(BOOL)_copyWillRetain;
-(BOOL)_isSafeResumeDataForBackgroundDownload;
-(id)_requestFromResumeData;
-(id)CKUppercaseHexStringWithoutSpaces;
-(id)CKLowercaseHexStringWithoutSpaces;
-(id)CKHexString;
@end
