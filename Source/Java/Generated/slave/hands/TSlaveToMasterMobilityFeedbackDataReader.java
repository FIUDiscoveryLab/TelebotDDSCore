
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
package TelebotDDSCore.Source.Java.Generated.slave.hands;
        
import com.rti.dds.infrastructure.InstanceHandle_t;
import com.rti.dds.subscription.DataReaderImpl;
import com.rti.dds.subscription.DataReaderListener;
import com.rti.dds.subscription.ReadCondition;
import com.rti.dds.subscription.SampleInfo;
import com.rti.dds.subscription.SampleInfoSeq;
import com.rti.dds.topic.TypeSupportImpl;


// ===========================================================================

/**
 * A reader for the TSlaveToMasterMobilityFeedback user type.
 */
public class TSlaveToMasterMobilityFeedbackDataReader extends DataReaderImpl {
    // -----------------------------------------------------------------------
    // Public Methods
    // -----------------------------------------------------------------------

    public void read(TSlaveToMasterMobilityFeedbackSeq received_data, SampleInfoSeq info_seq,
             int max_samples,
             int sample_states, int view_states, int instance_states) {
        read_untyped(received_data, info_seq, max_samples, sample_states,
             view_states, instance_states);
    }


    public void take(TSlaveToMasterMobilityFeedbackSeq received_data, SampleInfoSeq info_seq,
             int max_samples,
             int sample_states, int view_states, int instance_states) {
        take_untyped(received_data, info_seq, max_samples, sample_states,
             view_states, instance_states);
    }


    public void read_w_condition(TSlaveToMasterMobilityFeedbackSeq received_data, 
                 SampleInfoSeq info_seq,
                 int max_samples,
                 ReadCondition condition) {
        read_w_condition_untyped(received_data, info_seq, max_samples,
                 condition);
    }


    public void take_w_condition(TSlaveToMasterMobilityFeedbackSeq received_data, 
                 SampleInfoSeq info_seq,
                 int max_samples,
                 ReadCondition condition) {
        take_w_condition_untyped(received_data, info_seq, max_samples,
                 condition);
    }


    public void read_next_sample(TSlaveToMasterMobilityFeedback received_data, SampleInfo sample_info) {
        read_next_sample_untyped(received_data, sample_info);
    }


    public void take_next_sample(TSlaveToMasterMobilityFeedback received_data, SampleInfo sample_info) {
        take_next_sample_untyped(received_data, sample_info);
    }


    public void read_instance(TSlaveToMasterMobilityFeedbackSeq received_data, SampleInfoSeq info_seq,
            int max_samples, InstanceHandle_t a_handle, int sample_states,
            int view_states, int instance_states) {

        read_instance_untyped(received_data, info_seq, max_samples, a_handle,
            sample_states, view_states, instance_states);
    }


    public void take_instance(TSlaveToMasterMobilityFeedbackSeq received_data, SampleInfoSeq info_seq,
            int max_samples, InstanceHandle_t a_handle, int sample_states,
            int view_states, int instance_states) {

        take_instance_untyped(received_data, info_seq, max_samples, a_handle,
            sample_states, view_states, instance_states);
    }


      public void read_instance_w_condition(TSlaveToMasterMobilityFeedbackSeq received_data,
              SampleInfoSeq info_seq, int max_samples,
              InstanceHandle_t a_handle, ReadCondition condition) {

          read_instance_w_condition_untyped(received_data, info_seq, 
              max_samples, a_handle, condition);
      }


      public void take_instance_w_condition(TSlaveToMasterMobilityFeedbackSeq received_data,
              SampleInfoSeq info_seq, int max_samples,
              InstanceHandle_t a_handle, ReadCondition condition) {

          take_instance_w_condition_untyped(received_data, info_seq, 
              max_samples, a_handle, condition);
      }


    public void read_next_instance(TSlaveToMasterMobilityFeedbackSeq received_data,
            SampleInfoSeq info_seq, int max_samples,
            InstanceHandle_t a_handle, int sample_states, int view_states,
            int instance_states) {

        read_next_instance_untyped(received_data, info_seq, max_samples,
            a_handle, sample_states, view_states, instance_states);
    }


    public void take_next_instance(TSlaveToMasterMobilityFeedbackSeq received_data,
            SampleInfoSeq info_seq, int max_samples,
            InstanceHandle_t a_handle, int sample_states, int view_states,
            int instance_states) {

        take_next_instance_untyped(received_data, info_seq, max_samples,
            a_handle, sample_states, view_states, instance_states);
    }


    public void read_next_instance_w_condition(TSlaveToMasterMobilityFeedbackSeq received_data,
            SampleInfoSeq info_seq, int max_samples,
            InstanceHandle_t a_handle, ReadCondition condition) {

        read_next_instance_w_condition_untyped(received_data, info_seq, 
            max_samples, a_handle, condition);
    }


    public void take_next_instance_w_condition(TSlaveToMasterMobilityFeedbackSeq received_data,
            SampleInfoSeq info_seq, int max_samples,
            InstanceHandle_t a_handle, ReadCondition condition) {

        take_next_instance_w_condition_untyped(received_data, info_seq, 
            max_samples, a_handle, condition);
    }


    public void return_loan(TSlaveToMasterMobilityFeedbackSeq received_data, SampleInfoSeq info_seq) {
        return_loan_untyped(received_data, info_seq);
    }


    public void get_key_value(TSlaveToMasterMobilityFeedback key_holder, InstanceHandle_t handle){
        get_key_value_untyped(key_holder, handle);
    }


    public InstanceHandle_t lookup_instance(TSlaveToMasterMobilityFeedback key_holder) {
        return lookup_instance_untyped(key_holder);
    }

    // -----------------------------------------------------------------------
    // Package Methods
    // -----------------------------------------------------------------------

    // --- Constructors: -----------------------------------------------------

    /*package*/ TSlaveToMasterMobilityFeedbackDataReader(long native_reader, DataReaderListener listener,
                              int mask, TypeSupportImpl data_type) {
        super(native_reader, listener, mask, data_type);
    }

}
