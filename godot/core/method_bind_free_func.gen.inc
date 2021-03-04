#ifndef METHOD_BIND_FREE_FUNC_H
#define METHOD_BIND_FREE_FUNC_H

//including this header file allows method binding to use free functions
//note that the free function must have a pointer to an instance of the class as its first parameter

#ifdef TYPED_METHOD_BIND
template<class T   >
class FunctionBind0 : public MethodBind {
public:

	 void (*method) ( T *);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		(method)(instance);
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance)  ;
	}
#endif
	FunctionBind0 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		
	};
};

template<class T   >
MethodBind* create_method_bind( void (*p_method)( T *) ) {

	FunctionBind0<T   > * a = memnew( (FunctionBind0<T   >) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R  >
class FunctionBind0R : public MethodBind {
public:

	R  (*method) ( T *);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		Variant ret = (method)(instance);
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance) ,r_ret) ;
	}
#endif
	FunctionBind0R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R  >
MethodBind* create_method_bind(R  (*p_method)( T *) ) {

	FunctionBind0R<T ,R  > * a = memnew( (FunctionBind0R<T ,R  >) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T   >
class FunctionBind0C : public MethodBind {
public:

	 void (*method) (const T *);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		(method)(instance);
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance)  ;
	}
#endif
	FunctionBind0C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		
	};
};

template<class T   >
MethodBind* create_method_bind( void (*p_method)(const T *) ) {

	FunctionBind0C<T   > * a = memnew( (FunctionBind0C<T   >) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R  >
class FunctionBind0RC : public MethodBind {
public:

	R  (*method) (const T *);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		Variant ret = (method)(instance);
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance) ,r_ret) ;
	}
#endif
	FunctionBind0RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R  >
MethodBind* create_method_bind(R  (*p_method)(const T *) ) {

	FunctionBind0RC<T ,R  > * a = memnew( (FunctionBind0RC<T ,R  >) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1>
class FunctionBind1 : public MethodBind {
public:

	 void (*method) ( T *, P1);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		(method)(instance, _VC(1));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]))  ;
	}
#endif
	FunctionBind1 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		
	};
};

template<class T  , class P1>
MethodBind* create_method_bind( void (*p_method)( T *, P1) ) {

	FunctionBind1<T  , P1> * a = memnew( (FunctionBind1<T  , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1>
class FunctionBind1R : public MethodBind {
public:

	R  (*method) ( T *, P1);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		Variant ret = (method)(instance, _VC(1));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1])) ,r_ret) ;
	}
#endif
	FunctionBind1R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1>
MethodBind* create_method_bind(R  (*p_method)( T *, P1) ) {

	FunctionBind1R<T ,R , P1> * a = memnew( (FunctionBind1R<T ,R , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1>
class FunctionBind1C : public MethodBind {
public:

	 void (*method) (const T *, P1);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		(method)(instance, _VC(1));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]))  ;
	}
#endif
	FunctionBind1C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		
	};
};

template<class T  , class P1>
MethodBind* create_method_bind( void (*p_method)(const T *, P1) ) {

	FunctionBind1C<T  , P1> * a = memnew( (FunctionBind1C<T  , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1>
class FunctionBind1RC : public MethodBind {
public:

	R  (*method) (const T *, P1);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		Variant ret = (method)(instance, _VC(1));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1])) ,r_ret) ;
	}
#endif
	FunctionBind1RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1) ) {

	FunctionBind1RC<T ,R , P1> * a = memnew( (FunctionBind1RC<T ,R , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2>
class FunctionBind2 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		(method)(instance, _VC(1), _VC(2));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]))  ;
	}
#endif
	FunctionBind2 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		
	};
};

template<class T  , class P1, class P2>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2) ) {

	FunctionBind2<T  , P1, P2> * a = memnew( (FunctionBind2<T  , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2>
class FunctionBind2R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1])) ,r_ret) ;
	}
#endif
	FunctionBind2R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2) ) {

	FunctionBind2R<T ,R , P1, P2> * a = memnew( (FunctionBind2R<T ,R , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2>
class FunctionBind2C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		(method)(instance, _VC(1), _VC(2));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]))  ;
	}
#endif
	FunctionBind2C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		
	};
};

template<class T  , class P1, class P2>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2) ) {

	FunctionBind2C<T  , P1, P2> * a = memnew( (FunctionBind2C<T  , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2>
class FunctionBind2RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1])) ,r_ret) ;
	}
#endif
	FunctionBind2RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2) ) {

	FunctionBind2RC<T ,R , P1, P2> * a = memnew( (FunctionBind2RC<T ,R , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3>
class FunctionBind3 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]))  ;
	}
#endif
	FunctionBind3 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3) ) {

	FunctionBind3<T  , P1, P2, P3> * a = memnew( (FunctionBind3<T  , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3>
class FunctionBind3R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1])) ,r_ret) ;
	}
#endif
	FunctionBind3R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3) ) {

	FunctionBind3R<T ,R , P1, P2, P3> * a = memnew( (FunctionBind3R<T ,R , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3>
class FunctionBind3C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]))  ;
	}
#endif
	FunctionBind3C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3) ) {

	FunctionBind3C<T  , P1, P2, P3> * a = memnew( (FunctionBind3C<T  , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3>
class FunctionBind3RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1])) ,r_ret) ;
	}
#endif
	FunctionBind3RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3) ) {

	FunctionBind3RC<T ,R , P1, P2, P3> * a = memnew( (FunctionBind3RC<T ,R , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4>
class FunctionBind4 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]))  ;
	}
#endif
	FunctionBind4 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4) ) {

	FunctionBind4<T  , P1, P2, P3, P4> * a = memnew( (FunctionBind4<T  , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4>
class FunctionBind4R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1])) ,r_ret) ;
	}
#endif
	FunctionBind4R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4) ) {

	FunctionBind4R<T ,R , P1, P2, P3, P4> * a = memnew( (FunctionBind4R<T ,R , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4>
class FunctionBind4C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]))  ;
	}
#endif
	FunctionBind4C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4) ) {

	FunctionBind4C<T  , P1, P2, P3, P4> * a = memnew( (FunctionBind4C<T  , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4>
class FunctionBind4RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1])) ,r_ret) ;
	}
#endif
	FunctionBind4RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4) ) {

	FunctionBind4RC<T ,R , P1, P2, P3, P4> * a = memnew( (FunctionBind4RC<T ,R , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5>
class FunctionBind5 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]))  ;
	}
#endif
	FunctionBind5 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5) ) {

	FunctionBind5<T  , P1, P2, P3, P4, P5> * a = memnew( (FunctionBind5<T  , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
class FunctionBind5R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1])) ,r_ret) ;
	}
#endif
	FunctionBind5R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5) ) {

	FunctionBind5R<T ,R , P1, P2, P3, P4, P5> * a = memnew( (FunctionBind5R<T ,R , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5>
class FunctionBind5C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]))  ;
	}
#endif
	FunctionBind5C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5) ) {

	FunctionBind5C<T  , P1, P2, P3, P4, P5> * a = memnew( (FunctionBind5C<T  , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
class FunctionBind5RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1])) ,r_ret) ;
	}
#endif
	FunctionBind5RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5) ) {

	FunctionBind5RC<T ,R , P1, P2, P3, P4, P5> * a = memnew( (FunctionBind5RC<T ,R , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
class FunctionBind6 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]))  ;
	}
#endif
	FunctionBind6 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6) ) {

	FunctionBind6<T  , P1, P2, P3, P4, P5, P6> * a = memnew( (FunctionBind6<T  , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
class FunctionBind6R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1])) ,r_ret) ;
	}
#endif
	FunctionBind6R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6) ) {

	FunctionBind6R<T ,R , P1, P2, P3, P4, P5, P6> * a = memnew( (FunctionBind6R<T ,R , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
class FunctionBind6C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]))  ;
	}
#endif
	FunctionBind6C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6) ) {

	FunctionBind6C<T  , P1, P2, P3, P4, P5, P6> * a = memnew( (FunctionBind6C<T  , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
class FunctionBind6RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1])) ,r_ret) ;
	}
#endif
	FunctionBind6RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6) ) {

	FunctionBind6RC<T ,R , P1, P2, P3, P4, P5, P6> * a = memnew( (FunctionBind6RC<T ,R , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class FunctionBind7 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6, P7);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]))  ;
	}
#endif
	FunctionBind7 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7) ) {

	FunctionBind7<T  , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (FunctionBind7<T  , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class FunctionBind7R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6, P7);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1])) ,r_ret) ;
	}
#endif
	FunctionBind7R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7) ) {

	FunctionBind7R<T ,R , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (FunctionBind7R<T ,R , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class FunctionBind7C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6, P7);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]))  ;
	}
#endif
	FunctionBind7C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7) ) {

	FunctionBind7C<T  , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (FunctionBind7C<T  , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class FunctionBind7RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6, P7);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1])) ,r_ret) ;
	}
#endif
	FunctionBind7RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7) ) {

	FunctionBind7RC<T ,R , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (FunctionBind7RC<T ,R , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class FunctionBind8 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]))  ;
	}
#endif
	FunctionBind8 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8) ) {

	FunctionBind8<T  , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (FunctionBind8<T  , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class FunctionBind8R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1])) ,r_ret) ;
	}
#endif
	FunctionBind8R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8) ) {

	FunctionBind8R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (FunctionBind8R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class FunctionBind8C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]))  ;
	}
#endif
	FunctionBind8C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8) ) {

	FunctionBind8C<T  , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (FunctionBind8C<T  , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class FunctionBind8RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1])) ,r_ret) ;
	}
#endif
	FunctionBind8RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8) ) {

	FunctionBind8RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (FunctionBind8RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class FunctionBind9 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]))  ;
	}
#endif
	FunctionBind9 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9) ) {

	FunctionBind9<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (FunctionBind9<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class FunctionBind9R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1])) ,r_ret) ;
	}
#endif
	FunctionBind9R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9) ) {

	FunctionBind9R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (FunctionBind9R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class FunctionBind9C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]))  ;
	}
#endif
	FunctionBind9C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9) ) {

	FunctionBind9C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (FunctionBind9C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class FunctionBind9RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1])) ,r_ret) ;
	}
#endif
	FunctionBind9RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9) ) {

	FunctionBind9RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (FunctionBind9RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class FunctionBind10 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]))  ;
	}
#endif
	FunctionBind10 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ) {

	FunctionBind10<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (FunctionBind10<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class FunctionBind10R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1])) ,r_ret) ;
	}
#endif
	FunctionBind10R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ) {

	FunctionBind10R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (FunctionBind10R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class FunctionBind10C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]))  ;
	}
#endif
	FunctionBind10C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ) {

	FunctionBind10C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (FunctionBind10C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class FunctionBind10RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1])) ,r_ret) ;
	}
#endif
	FunctionBind10RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ) {

	FunctionBind10RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (FunctionBind10RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class FunctionBind11 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]))  ;
	}
#endif
	FunctionBind11 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ) {

	FunctionBind11<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (FunctionBind11<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class FunctionBind11R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1])) ,r_ret) ;
	}
#endif
	FunctionBind11R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ) {

	FunctionBind11R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (FunctionBind11R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class FunctionBind11C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]))  ;
	}
#endif
	FunctionBind11C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ) {

	FunctionBind11C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (FunctionBind11C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class FunctionBind11RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1])) ,r_ret) ;
	}
#endif
	FunctionBind11RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ) {

	FunctionBind11RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (FunctionBind11RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class FunctionBind12 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]))  ;
	}
#endif
	FunctionBind12 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ) {

	FunctionBind12<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (FunctionBind12<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class FunctionBind12R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1])) ,r_ret) ;
	}
#endif
	FunctionBind12R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ) {

	FunctionBind12R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (FunctionBind12R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class FunctionBind12C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]))  ;
	}
#endif
	FunctionBind12C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ) {

	FunctionBind12C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (FunctionBind12C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class FunctionBind12RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1])) ,r_ret) ;
	}
#endif
	FunctionBind12RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ) {

	FunctionBind12RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (FunctionBind12RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class FunctionBind13 : public MethodBind {
public:

	 void (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1]))  ;
	}
#endif
	FunctionBind13 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind( void (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ) {

	FunctionBind13<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (FunctionBind13<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class FunctionBind13R : public MethodBind {
public:

	R  (*method) ( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1])) ,r_ret) ;
	}
#endif
	FunctionBind13R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind(R  (*p_method)( T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ) {

	FunctionBind13R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (FunctionBind13R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class FunctionBind13C : public MethodBind {
public:

	 void (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		(method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1]))  ;
	}
#endif
	FunctionBind13C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind( void (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ) {

	FunctionBind13C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (FunctionBind13C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class FunctionBind13RC : public MethodBind {
public:

	R  (*method) (const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13);
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		Variant ret = (method)(instance, _VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (method)(instance, PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1])) ,r_ret) ;
	}
#endif
	FunctionBind13RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind(R  (*p_method)(const T *, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ) {

	FunctionBind13RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (FunctionBind13RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif
#endif