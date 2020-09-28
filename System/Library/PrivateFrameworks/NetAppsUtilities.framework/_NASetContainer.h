/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NASetContainer : NSObject {

	id _object;
	unsigned long long _index;
	/*^block*/id _comparator;
	/*^block*/id _hashGenerator;

}

@property (nonatomic,retain) id object;                             //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) id comparator;                           //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,copy) id hashGenerator;                        //@synthesize hashGenerator=_hashGenerator - In the implementation block
+(id)containerWithObject:(id)arg1 atIndex:(unsigned long long)arg2 comparator:(/*^block*/id)arg3 hashGenerator:(/*^block*/id)arg4 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 ;
-(unsigned long long)index;
-(id)hashGenerator;
-(id)comparator;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
-(void)setComparator:(id)arg1 ;
-(void)setHashGenerator:(id)arg1 ;
@end
