/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTArchiver : NSObject {

	archiveRef _archive;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)extractArchiveAtURL:(id)arg1 error:(id*)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(BOOL)valid;
-(void)dealloc;
-(id)init;
-(void)closeArchive;
-(id)initWithOutputURL:(id)arg1 compress:(BOOL)arg2 ;
-(void)addDirectoryToArchive:(id)arg1 ;
-(void)addFileToArchive:(id)arg1 ;
@end

