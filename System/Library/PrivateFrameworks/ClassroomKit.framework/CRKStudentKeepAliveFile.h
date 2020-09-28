/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKMarker.h>

@protocol CRKMarker;
@class NSString;

@interface CRKStudentKeepAliveFile : NSObject <CRKMarker> {

	id<CRKMarker> _fileMarker;

}

@property (nonatomic,readonly) id<CRKMarker> fileMarker;              //@synthesize fileMarker=_fileMarker - In the implementation block
@property (nonatomic,readonly) BOOL exists; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fileURL;
-(BOOL)exists;
-(BOOL)deleteWithError:(id*)arg1 ;
-(id)init;
-(BOOL)createWithError:(id*)arg1 ;
-(id<CRKMarker>)fileMarker;
@end
