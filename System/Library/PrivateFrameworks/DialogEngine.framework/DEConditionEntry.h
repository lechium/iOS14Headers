/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DEConditionEntry : NSObject {

	shared_ptr<siri::dialogengine::ConditionEntry>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::ConditionEntry>* This;              //@synthesize This=_This - In the implementation block
@property (assign) int type; 
-(shared_ptr<siri::dialogengine::ConditionEntry>*)This;
-(void)setThis:(shared_ptr<siri::dialogengine::ConditionEntry>*)arg1 ;
-(void*)getRawSharedPtr;
-(id)init;
-(int)type;
-(id)initWithSharedPtr:(void*)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
@end
